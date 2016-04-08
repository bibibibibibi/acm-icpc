#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long LL;
const int maxn = 3162278, maxs = 227647, maxp = 221763;
const int maxsp = maxp / 100 + 2;
const LL sprime[maxsp] = {0,277513,1343161,3795013,7292381,12395221,19213801,25927201,37023013,48521101,62596861,77862721,95786641,115961221,139528513,160652813,189131801,216132841,248845741,283577113,315230941,354072661,389456141,427810501,473550313,520644181,562969013,614987521,666307513,714004261,771105721,836609513,902317681,973066613,1033987813,1109628941,1188330001,1259769013,1343952013,1423911613,1497193921,1580400421,1674179113,1760558461,1857512201,1952812513,2054981941,2153714081,2253554113,2374225141,2493239113,2606347801,2725065313,2846426701,2957497141,3089844661,3218827613,3358311013,3478697461,3629094013,3760092481,3895884721,4048110221,4229148481,4381322441,4521149141,4691414113,4864431613,5028941761,5204550313,5380060181,5551523821,5730386513,5902954513,6081831761,6248390261,6436699261,6619286741,6809328301,7007030581,7201080041,7401672781,7613163013,7815125221,8018718161,8236732901,8472244621,8698936901,8913661681,9177279721,9410410861,9632581201,9858186113,10059434641,10296842513,10551831721,10783195513,11044695313,11307222581,11588661041,11840296613,12117352813,12398557921,12637479181,12916262813,13188666461,13463584513,13739680681,14013221461,14346316661,14626485613,14916271921,15206808013,15485360113,15774254581,16084825441,16356797581,16664989613,17025475921,17368938581,17660909741,17983750901,18301479881,18647860321,18996708281,19345248301,19659660341,19967013613,20325513821,20688017461,21016395181,21333723361,21671746241,22054410221,22423478221,22876391101,23266480613,23630293013,24061817821,24455651641,24808558501,25171172821,25543650313,25937081041,26340862813,26719553281,27109328401,27548851721,27970618681,28418472013,28848260201,29298700381,29714100421,30174172141,30553672801,30969382813,31359846361,31813770013,32211027113,32650601341,33141538513,33597763421,34015883621,34457062613,34924866341,35362307741,35853331981,36309465721,36799403341,37275147761,37818275221,38307736013,38827091113,39362287621,39827168681,40316924761,40775398021,41290471081,41811090313,42315768613,42861528113,43369542613,43892400613,44443431661,44976303121,45477962461,46029117461,46521345421,47035205341,47582731561,48248294161,48828437501,49373074561,49950438521,50561682001,51204800113,51720033821,52269527813,52882398113,53494261141,54147152281,54721267021,55318364821,55981591441,56524970221,57174402013,57722166221,58336740313,59063126513,59657833621,60251354113,60968574013,61590321421,62173605821,62773102813,63490879513,64119595513,64842847081,65597679841,66225797861,66897138421,67528492501,68159858113,68861687161,69564127001,70346629141,70973672041,71659515313,72284004421,72958562041,73580234113,74266965401,75064563113,75772962761,76497205513,77180883161,77876284513,78570840461,79273258021,80007600181,80733272621,81420248113,82126344481,82922616041,83689996321,84561225013,85305564301,85980165881,86819028301,87566521561,88283599801,88983351661,89729070313,90559593781,91258036981,92102457241,92846454121,93532882561,94360802621,95086807961,95703562501,96501470521,97317690313,98181655321,99094842113,99846845321,100692320041,101489090981,102233828381,103164717613,103985784761,104850400381,105831742381,106624540261,107474070313,108493670381,109361823521,110262549601,111001055621,111928364113,112860480101,113830812661,114888690601,115742557321,116717444401,117668281613,118549925521,119476895621,120430050313,121319991113,122309139461,123177194141,124216730881,125082513613,126127029001,127033705301,128043807301,128894368721,129851685661,130841189701,131727665921,132601685221,133613998741,134622897161,135610591261,136448268013,137521279013,138616393921,139582673161,140489752813,141390198221,142306323541,143243605013,144399917401,145376408113,146381077813,147282811061,148338695881,149391792661,150494695313,151560909613,152529243521,153607062181,154609702813,155628994513,156730007813,157764117481,158731753361,159816530161,161004858341,162044982761,163126152113,164245302941,165455706001,166481233421,167687091613,168814780741,169938087061,170969205013,172056232661,173136112801,174286670401,175359303113,176516023613,177537083081,178810970113,179937005513,181162872113,182205716113,183526505401,184800993301,186001813121,187103737813,188474054761,189660861941,190683383701,191841187621,193047231613,194102504861,195418139281,196715636041,198006098513,199146760513,200407171901,201580116301,202779408613,203993755061,205268107181,206421757921,207689480501,208958498113,210078379013,211385871841,212724815113,213903128381,215082072581,216619543841,217766341301,219105450313,220347747401,221415178513,222611948501,223880192101,225023215513,226245827813,227505478513,228786213241,230150593513,231690539921,232963871461,234105189541,235349452813,236746997941,238036890181,239396709301,240675751013,242121007813,243431020013,244824331501,246276358021,247590511741,248896873513,250137352301,251490121261,252830893901,254219438201,255440214041,256890368113,258307250041,259934199181,261249555641,262624758541,263980319441,265490914613,266772027241,268174852441,269488845401,270810465301,272145646561,273519611821,274867378241,276277921141,277814307013,279407278261,281096271013,282594853841,284043150613,285650832013,287146334021,288685251401,289986055241,291396650641,292827504481,293994954013,295499812613,297057841261,298497874513,300096313921,301461371681,302952501601,304469159513,305711172113,307217465941,308692888061,310219103521,311772771601,313145109113,314639439721,316180267261,317747179021,319177329421,320777271421,322255962113,323678511113,325260644701,326764172461,328219311841,329724782113,331305326041,332981042113,334292932121,335769637813,337300519141,339055537813,340790342621,342357437813,343939739113,345497425061,347331953113,348858868513,350417595641,352246657141,353897051513,355652502661,357045455761,358646059381,360489650513,361929469201,363709823161,365564656861,367215073061,368915589421,370702690201,372376733041,373947303241,375424122613,377112254261,378732802813,380271356141,382139920681,384081424801,385757266441,387526548821,389121658381,390850885661,392466990613,394125493613,395801728921,397458339781,399107689021,400674511381,402502761421,404194900513,405959067113,407591632813,409285376501,411165790313,413054149513,414904930861,416648474101,418461538613,420296875961,421921247441,423581886113,425181233401,427142137813,429164992261,430711720321,432529053613,434176870513,436135971013,438187475101,439945450313,441695666161,443503979861,445444344581,447207345113,449237299321,450994486181,452724652801,454637383241,456405089461,458174311061,460098507181,461874866081,463481329261,465491882813,467253478301,469179189361,471128274301,473324607841,475073655013,476683362013,478700791981,480538159513,482251366141,483995169113,486067434481,488140174381,490009410841,491844529861,493730775761,496003020013,498202618201,499941001741,501556209013,503386715581,505365316601,507136283161,509100032741,511288000313,513194922941,515233292081,517226880281,519226356013,521260319761,523224603761,525307375013,527168361241,529147850113,531242365681,533436040513,535555576513,537633688201,539516362613,541716628081,544236401701,546341724613,548524427401,550703085721,552890268361,555210337613,557366322241,559839653101,561629352961,563576902813,565504426561,567607833113,569794137613,571717284613,573939337441,575674157041,577753376513,579868650961,581791451513,584084855381,585925857721,587886858781,590198752261,592556549821,594661647361,597019591921,599020945801,601288808821,603363208561,605196916021,607136983741,609281046613,611468699113,613715665513,615840227861,617872856441,620254057981,622432295113,624804371941,627037610513,629216498201,631307021461,633486554401,635649547681,637511315281,639789752113,641997464113,644349736841,646992938113,649235822513,651345618013,653968804901,656113762813,658555999513,660749844613,663021034261,665141558821,667126849901,669369623761,671525763901,673710908113,675806591461,678157061441,680390287813,682578111601,684678169013,687020559013,689397478421,691689110621,694076441801,696784222513,699530393381,701734535881,704272043021,706505033701,709265511221,711446754101,714262276841,716585258401,719058308113,721405885621,723870387421,726228211021,728437777061,731100458113,733271399041,735816722941,738150165481,740428889513,742974405013,745578017321,748151932613,750754790161,753286065313,755767504013,758265337813,760828969013,762823699621,765449458513,767955791881,770721959701,773314006613,775546697021,777473325313,780081687113,782731952113,785266398841,787488655181,790005645113,792566939221,795003756013,797131147441,799681193141,802073184701,804747829141,807350681341,809945008501,812678630513,815135933021,818088057581,820274271961,822686581921,825074172781,827586153113,829937033161,832670605681,835310437813,837643780121,839905202813,842842079461,845786683013,848137206461,851044069441,853746818761,855935654113,858418149481,860757282113,863467514321,866097772321,868805847113,871280521861,873787798841,876566117741,878866191013,881294070313,883786454501,886444793501,889024449613,891714686701,894387588701,896901085121,899267899513,902188489721,904753271021,907461795241,910198653421,912674806513,915257145613,918024695041,920758425313,923189102113,926003991613,928883137001,931564725613,934222840961,937218774101,940123515421,942969578513,945786934513,948545133901,951525299561,954476979601,957444301013,960291497101,962912541541,965520482581,968067942701,971006130361,973694774561,976602350021,979438680401,981973592641,984949633981,987491663141,990104512801,992717996513,995896546741,998709858301,1001770583113,1004334212813,1007275791901,1009832240101,1013032356601,1015989487813,1018808178701,1021293457241,1023921999421,1026642759521,1029303998113,1032399718741,1035525991613,1038083436941,1040921046941,1044201803581,1047201156013,1049697623521,1052257991513,1055306656013,1058368459901,1061548348613,1064648371261,1067589250313,1070490288841,1073286842081,1076330584013,1078964341061,1081668973621,1084615577281,1087707777521,1090751207041,1093482393961,1096326569561,1099453201321,1102789222081,1105820945641,1108919378041,1112210059801,1115741627113,1118566723513,1121560133513,1124143663021,1126739171641,1130203503113,1133233509721,1136125872601,1139308710541,1142036514613,1145318422613,1148589883013,1151917614961,1154836748561,1157686536613,1160823226513,1163836000121,1167118504021,1170472950113,1173810759013,1176487495741,1179456007813,1182874266901,1185946304513,1189130274961,1192479118781,1195659469661,1199330317561,1202553903641,1205968173841,1209601916821,1213206856513,1216517656381,1219992291013,1223112124841,1226254735201,1229360608481,1232059101001,1235621868181,1238566439941,1241738284513,1244459786081,1247756059481,1251078838021,1254399699281,1257477555661,1260657629113,1263953011861,1267230408001,1270084875841,1273622364041,1276857930613,1280577665161,1283632974181,1286833095113,1289985800221,1293618431561,1296830967613,1300044262721,1303619971513,1306857828301,1309730662813,1313115459613,1316228787613,1319378290313,1322710462813,1326089179801,1329540693781,1332804031781,1336162912813,1340017100281,1343208031421,1346317427813,1349798436013,1353142458121,1356368733761,1360212347821,1363347957721,1366698791701,1370106709441,1373512241113,1377383371501,1381004000521,1384200075101,1387709694841,1390853472013,1394224559113,1397208532901,1400426640313,1403474203013,1406515014841,1410166989113,1413618555361,1418027357741,1421903338441,1425490797613,1429251842761,1432699588501,1436087086501,1439743289513,1443060950941,1446443660401,1450004024741,1453964360113,1457264212801,1460666937241,1464196837513,1468049692513,1471403221261,1475227750361,1478699522341,1482364770961,1486258680901,1489691617961,1493422303001,1496849656681,1499944908181,1503230613613,1507092785941,1510862566361,1514494339601,1518363974821,1521875641613,1525461231361,1528610388541,1532116372513,1535174261041,1538449191941,1541998044581,1545835819613,1549238271001,1552647987113,1556544858013,1560481945313,1563875708513,1567758303061,1571117421613,1574760523361,1578972898861,1582838592613,1586302877381,1589899336801,1593610553921,1597515563113,1600849135121,1604429793121,1607236240513,1611021475013,1614714118861,1618648482001,1622555206781,1625972494613,1629122606861,1632572097421,1636104827813,1640275245221,1644182579113,1648276120441,1652705625121,1656518515313,1660069757813,1663380385741,1667274952813,1670936415121,1675183910401,1679319505141,1682961138013,1686551616601,1690270945313,1693931789113,1697898793681,1701663812861,1705503182941,1709446725313,1713320776081,1717102845961,1721182220161,1724679495013,1728184037581,1732105307561,1735468336013,1738980087521,1743059211613,1747169284613,1751115765313,1755167870461,1758523196821,1762110749341,1765893641513,1770395563301,1774560327961,1777903959613,1781892532201,1785107014501,1789489564381,1793911582013,1797777739013,1801826496121,1805910214721,1809469663601,1813588692613,1817697151121,1821970602961,1826161160513,1830302959721,1834234927813,1838654326081,1842606767741,1846521174721,1850851444181,1854874748521,1858555368181,1862228056613,1866310068001,1870110310613,1873991856421,1878001458841,1882197721013,1886402550821,1890094860721,1894176142081,1897879944721,1901911107461,1906887723161,1911002725013,1915118247901,1918960000861,1923476331613,1927393208161,1931152912813,1934987100313,1938391896013,1943171523581,1947589925821,1951930360381,1956469476613,1960574237861,1964271011513,1968800633461,1972278730141,1976650550341,1980231094141,1983802926613,1987756794581,1991898221513,1996411611013,2000202005101,2004492520013,2008607240701,2012340978961,2016584237813,2020984758113,2025120387721,2029872722081,2034186857221,2038142139181,2041232350561,2045141889013,2048957998781,2052834400013,2056556271281,2061320962021,2065233423013,2069523918113,2073961428013,2077779856681,2081862975721,2086146189581,2090347927813,2094950977813,2099427945161,2103995846461,2108716571161,2112838183013,2117116087813,2121699061201,2125602402013,2129472182921,2133308302621,2137321542721,2141251637621,2145069350113,2149537321621,2154537170281,2159052390013,2163722111501,2167609765081,2171455060613,2175779354761,2180433708181,2184971787241,2188962168901,2193044150701,2197616291681,2201890996681,2205753964441,2209725429001,2214062392361,2218070813113,2222167184641,2226723140881,2231233063513,2235172416881,2239449614141,2243514832061,2247507410513,2252861841781,2257385395201,2261449838761,2265573282601,2270186282113,2274462709021,2278282060661,2282754128513,2286708744013,2291278978741,2295240968341,2300115692113,2304050964601,2308801798661,2313733917013,2318714366981,2323066414561,2327983528681,2332616403613,2337089570113,2341298686381,2345173724921,2350339645513,2355077171761,2359159082281,2363114086061,2367094160381,2370838048261,2375570021761,2379612924613,2384226987521,2388259762813,2392799067601,2396646415441,2401443509701,2406183975761,2410178185981,2414175708601,2418418458481,2423320938541,2427377814601,2431980591361,2435912271421,2439727842301,2443917807013,2449049658613,2453788121513,2458708562813,2463625053541,2468133188221,2472485332721,2476511920261,2481103107601,2485444371701,2490378580561,2495353426061,2499868124041,2504207863301,2508632002813,2513629522013,2517824100313,2522884672921,2528008788241,2532071316613,2536492962121,2541170952013,2545735916021,2550544378241,2555181046661,2559962212813,2564457956761,2569465410121,2574500438941,2579812966681,2583835054501,2587992228121,2592170958613,2596672094941,2601797568661,2606023953041,2610121248113,2614683670981,2619877240301,2624411521481,2629472555561,2633813153581,2638745401921,2643585689113,2648554693513,2653860107401,2659046298901,2663637415961,2668786940881,2674223577121,2679045355013,2683222800241,2687408136613,2692362445501,2697316671613,2701996486601,2706345328681,2710958453501,2715603472513,2720583691081,2725517107513,2730585858613,2735518975313,2739932154961,2744976797113,2750124579061,2755662179821,2760580290613,2766161331961,2770787471513,2774734272181,2779763679113,2784811800013,2790124342513,2795716236821,2800726747061,2805959682301,2811031522961,2816563621621,2821915852813,2826179422981,2831831112013,2836711895513,2842207204201,2847130325113,2851737679013,2856262713961,2861140576321,2865644334061,2871019012513,2876245224613,2881548208013,2886207341113,2890423013461,2895623531501,2900245856621,2905869835013,2910659566541,2915487048541,2920342698001,2924302677661,2929794997141,2935597766513,2940387675481,2944846571581,2949848043521,2954878069001,2959596088861,2964502926013,2969925613381,2974528793381,2979325935613,2984708405561,2989890319441,2995008198701,3000365615161,3005306119513,3010358650613,3015400690681,3020466612281,3026230515313,3031236579841,3036512925601,3041591610461,3046462254113,3052053240601,3057728486513,3062785275061,3067900736513,3073739453461,3078362812813,3083312463181,3088037449621,3093109279261,3099026694461,3104097570313,3109067858581,3114785859961,3119340065113,3124587513613,3129754306901,3134654945941,3139529349013,3145034508001,3150373798321,3155185041013,3160839673513,3166262817701,3171660387013,3176407194721,3181389613513,3186805104601,3192194880113,3197948319061,3203261447161,3208426994401,3214255886701,3218831467513,3224034941513,3229151129881,3234057738001,3239655305801,3244585169113,3250130646361,3255497136113,3260372640313,3265532902013,3270201085621,3275548279561,3281191870613,3285891737701,3291431336341,3296924243401,3301974567113,3307537988221,3312611875201,3317694802813,3322755848161,3327645323113,3333183844381,3338659785301,3345091999261,3350966019241,3356513542201,3361837465013,3366859396741,3372440831141,3378151652761,3383248180001,3389572167521,3394953502513,3400203501041,3405290532341,3410673878221,3416260130141,3421976524513,3427587730561,3433103959513,3438860648341,3443724558013,3448387060621,3453268212421,3459068077613,3464962312813,3469992164113,3475273479661,3482110359181,3488182660481,3494059342513,3500205548621,3505181474341,3510918757813,3516236419081,3522189757813,3527632815313,3532909950961,3537733500313,3542975591513,3548344104761,3553567389121,3559632279013,3565654271701,3570649763521,3575563178641,3581159707501,3586889174441,3593625809513,3599268647041,3605286466501,3611088941461,3617025182581,3622180328113,3627737786401,3634016586521,3639885295513,3645321307081,3650891078381,3657568515901,3664057144201,3670941693641,3676330336621,3682097413513,3688194917201,3694710642901,3699920835113,3705417810613,3711202199641,3716740263241,3722735396161,3728347591513,3735368780113,3740563788613,3746074439021,3751665843421,3757414929881,3763492148113,3770189350313,3775969095121,3781208750113,3787508837813,3793869261113,3800383894301,3806208800861,3811353427813,3817778044501,3823887271261,3829624988113,3835123284721,3841933788221,3847263378901,3853168504421,3859017039113,3865203645161,3870293380241,3876862135801,3882572566601,3888186809113,3893330715341,3899321343013,3905171250301,3911657643181,3917785512841,3923963001113,3929635113361,3936130560013,3941362224581,3946771553513,3952853750341,3958766171861,3964418320381,3970029415861,3976665313613,3982206046321,3987135007813,3993366909281,3999032383613,4004418870061,4009684379401,4015508774513,4021422476041,4026892125281,4032967561741,4038649679741,4044739664201,4050708998701,4056278272513,4062449938621,4068095732401,4073488556341,4079541900461,4086251510041,4093229858801,4099790353541,4106545245401,4113173760961,4119669840313,4125395455781,4131676953013,4136979424801,4143557600113,4149749191613,4155985768201,4162042376101,4167987904841,4174261281581,4180458412813,4185537472481,4191048092113,4197199720741,4203390654013,4208942023441,4215129993541,4220921542613,4226897333341,4232650405681,4238255994013,4244139153113,4250522039513,4256367020141,4262385358921,4268308609501,4273908516113,4280647294481,4286735473201,4291861090201,4298297340013,4304632782013,4310708625313,4315948442041,4322267472641,4328920670621,4334742735601,4341140329021,4347383409361,4352787085721,4359056248013,4365838156741,4372075308301,4378376095381,4383905590201,4390600114741,4397003194981,4402787760781,4408813681801,4414843723721,4421234714821,4427183972821,4433155096613,4440322180841,4446343903861,4452333898381,4459319357641,4466286382541,4472188105613,4478009930461,4483428284921,4489658947801,4495684035361,4501227083641,4507199877601,4513555192613,4519476027613,4525653457261,4532250577181,4539653974861,4546315564601,4553018249821,4559188356113,4566015352813,4571867673661,4578334974001,4585242907481,4590598471201,4597151774261,4603400250721,4609695479513,4616268471541,4622244112813,4629647591141,4636374862081,4642820572613,4648978027513,4655524031401,4661476164601,4667535981113,4673813748661,4679753083781,4686081918601,4692408903113,4698954745601,4705572641041,4712539030421,4719221781013,4725724805521,4732595334013,4738627302613,4745260743781,4752231775381,4758523035421,4764688803481,4770932699041,4777298142301,4784187485921,4790406996761,4796234101621,4802783755613,4809728662813,4816417874881,4823149005401,4830543758221,4836612926381,4843439070313,4849977262813,4855441590221,4861432829401,4868444959601,4875174864013,4882065653561,4888942547761,4895492596513,4902992682701,4909721346401,4916228852813,4921830763261,4928358845341,4936097710013,4941547450061,4948189257101,4955295137941,4961757162961,4968027963401,4974346882013,4981585144801,4988436993581,4995660209513,5001604478113,5008172574661,5014675308613,5022640093021,5029520108401,5036189018701,5042379636901,5050016791513,5057074537813,5064468197401,5071122013361,5077620859721,5084602194281,5090924595901,5098323790981,5105594147513,5111360447701,5117616277513,5124925984261,5131958975113,5138124812141,5144236614613,5150794966441,5156772991921,5163789229513,5170752352021,5177436987101,5183688032641,5190464791513,5197168600313,5204038042013,5211254224441,5217803457781,5225656328401,5232680435221,5239663939021,5246969559613,5254442355541,5261959397741,5268806588281,5275580272513,5281805764621,5289218753701,5295660566881,5302360303561,5308784044261,5316065941513,5323750914301,5329919866741,5336236132813,5343654515513,5351064965461,5357996056921,5363955535901,5370809754241,5378068459513,5385187665313,5391543152561,5398368966961,5405146492901,5412856080013,5418562868221,5425913056261,5433353933981,5441004433261,5448594292961,5455006893481,5461251408121,5468471740513,5474935732741,5482118745221,5489644438501,5495709819781,5503171845781,5510366711501,5517905118181,5525083012021,5532072645481,5539426168541,5546251676341,5553208025821,5561029125313,5567867925313,5574831135161,5581310892301,5587954877761,5594341906301,5601435445381,5608499987021,5615334392981,5622206493181,5629116349121,5636836250821,5643822282341,5651222785961,5658554128141,5666018141741,5672456352421,5680947444541,5688028205641,5695916641021,5702912158501,5709830865701,5717003989621,5724885415001,5732210193613,5739275388001,5746358494141,5753235655081,5760768623461,5767260427501,5775203595461,5781615112813,5788125453661,5795190968113,5803487211901,5810984814101,5817886882813,5825427911113,5831723801021,5838768026041,5846561934721,5854203640013,5862405035401,5869255337401,5876685582881,5883564802813,5890859933701,5898290099113,5906377953481,5913157600741,5921510297081,5928780698681,5936875640281,5945334720613,5952978575501,5960206117013,5967963167641,5976845411461,5984488731821,5992171554641,5999305068901,6007891685821,6014812570313,6022570356661,6029423291113,6036731823361,6043509368161,6051216055513,6058955502121,6065334516961,6073375738981,6080459768501,6087261809201,6095568939781,6102756731161,6109746009161,6116914170361,6124716503281,6132145582841,6139361909101,6146119674421,6154431771601,6161190802813,6169091565313,6177011449621,6184711323181,6192437108113,6199956432601,6208022948441,6215072230441,6222386560613,6229641656221,6237670941013,6246454694981,6253539903113,6260296509013,6268770411961,6275662778113,6282381695881,6290196601613,6297931187113,6304676215613,6313464363361,6320999901241,6328468780141,6335443712581,6342963858181,6351080076041,6357625282013,6364630530241,6372624931201,6380917280821,6388114064113,6395300598013,6403013629801,6410366083013,6417830235361,6425126662813,6432212031701,6440011882813,6447170087581,6455043674861,6464079790313,6471848565113,6479996400001,6487090338481,6495363095113,6503367027613,6511101629821,6519498006013,6526411205581,6534940361221,6542252398501,6549626432761,6558011388013,6566430698521,6573281710381,6581645507813,6590123536261,6597386458261,6604558884613,6613175304013,6621520765901,6629223338113,6637199997013,6644649205801,6652051527721,6659530960921,6666656746681,6673808263361,6681555801241,6691012420513,6698660127613,6706092465113,6714789500161,6723976225513,6730960282201,6738234301481,6745975056661,6753404187961,6761889122981,6769503626261,6776960424613,6785430669113,6793744013321,6801590343001,6809987387813,6819083877061,6826065412321,6833590258613,6841748086321,6848496946513,6856234105613,6864701856521,6873627168721,6881957250313,6890307225313,6897533108621,6905922256021,6913728961921,6922492591613,6930234195613,6938412237961,6946535465141,6953544633421,6961855819801,6969440188681,6976752261361,6984793241641,6992786496721,7000537361801,7007311659661,7015265345113,7023373457101,7030856255513,7038793272061,7046502012113,7053576445301,7062751454441,7071014813461,7079260426981,7087277418961,7095314016013,7102789801421,7110480701381,7119579428681,7128827458381,7135920420241,7143009349613,7151652322421,7158453922681,7167712013113,7176710882641,7184282483461,7193314503421,7201790496013,7209117104113,7217837961881,7228016423941,7236459570121,7243735275041,7252355167513,7261269807013,7268573221561,7277474929513,7285084216961,7294271027513,7303020293113,7311966007813,7320014180221,7327936616701,7335334756681,7343372782121,7351384533781,7358541300613,7367290629613,7375607307181,7383598190861,7391724127813,7399085145961,7406896289581,7414364977241,7422800647001,7430878729513,7439555224513,7447271914513,7455764893513,7463242718681,7472378782013,7480421902813,7489653618361,7499138881561,7507661375761,7514676693221,7521811644661,7530191777221,7538025209261,7547214687013,7556137638701,7564785802813,7573555670521,7581536226221,7589895007813,7597650276613,7605854123981,7613430234961,7621462999981,7629507812921,7637150407613,7646063782613,7654864972613,7662120957581,7669920862661,7677952016461,7686159885013,7695039037181,7702949875613,7711744462813,7719978227821,7728900476441,7737489565313,7745650469101,7753610901121,7761599061301,7769883043301,7778076784321,7786661576513,7794335083001,7804351058113,7812056990113,7821309127813,7830883337513,7838190577141,7847410632781,7856683676041,7863233583461,7871143099513,7879239196513,7887712802621,7896318130013,7904769103321,7913335987813,7920761189941,7929057975313,7937717695601,7947067847513,7954899743341,7963900815613,7972587522941,7981127143921,7988847889261,7997996125501,8006125171981,8013930058681,8022539854081,8030889760613,8038730764121,8047795174381,8055459786641,8064188240113,8072077622221,8080879394281,8090152562813,8098457081261,8108763177901,8117625215701,8125734189361,8133411618113,8141778656761,8150077324513,8158945745341,8167705820341,8176357367401,8185442374513,8194451459521,8202906533641,8209712631961,8218751276881,8226991717601,8234351583613,8244272725441,8252664077813,8261262936841,8271200272613,8279271634981,8288763772801,8296542259261,8304683030341,8313618838901,8321629274113,8331153819301,8340038507813,8348927931301,8357912036501,8366835521881,8375182591921,8383656666841,8392724985013,8401027569481,8410088870041,8418555961513,8427955152013,8437836108001,8446095210061,8454514609741,8463366076261,8472008124361,8480901688921,8491151539841,8500327272113,8509359445313,8517802055621,8526670062881,8537253300581,8546693696113,8555022436021,8564497480481,8572246914641,8580820080461,8590325976013,8598684237421,8607602536321,8616957195313,8625469615313,8633196715613,8641634004613,8650923941701,8660768233613,8669776959121,8678632051013,8686366249861,8695304871013,8704673673701,8712745064113,8722365501361,8730595519141,8739339462001,8746983545621,8756572643321,8765296086013,8775372794161,8783116440841,8792767253561,8801063974561,8810808595861,8821255844701,8830103892013,8839629109121,8847745986601,8856784072501,8865313050313,8876373993401,8885005135801,8893648907501,8902305320801,8912350684381,8920999296221,8930463517981,8939602940581,8948611660561,8957023892501,8966337810301,8975029518001,8984768212201,8992154152841,9001333566013,9011969551261,9021643306061,9031330750181,9040045390381,9049657620121,9060211431241,9070353987241,9079760718601,9090442924513,9100192824241,9110306505361,9119614344541,9128926936121,9136876298981,9147181425241,9156636459401,9165385644013,9176375124061,9185948100013,9195148684441,9203332754701,9212730907561,9221816053013,9231567382813,9240893956013,9250397287513,9260266997701,9270340040161,9280444407613,9289424940881,9298435691641,9306872676613,9317212765561,9327783192841,9336838451513,9345266897513,9353007126013,9364013276461,9371683334161,9381123717341,9389502787813,9399845305661,9409551466901,9418924093541,9428414289013,9438604416841,9449704274513,9459514429601,9467998052801,9478766850313,9490264961113,9499198225613,9507978705721,9517583455381,9526878766861,9536571666481,9545963631881,9554879351921,9564936380221,9573397123513,9582220576921,9591670027321,9600869978221,9610644277841,9619818231301,9627890717941,9637476802813,9646233098881,9655177933013,9664865520241,9673731015313,9683647943621,9694503428513,9704483862361,9712944382681,9723128331841,9732982300313,9743159088781,9751503960421,9760815576121,9768575703613,9779054113513,9789980627813,9799585069513,9810186400561,9819765292901,9830865282013,9842131261513,9852844356941,9862532873341,9872794923601,9882920041321,9893797652813,9905366677813,9914867228741,9925183195313,9935504525741,9944689491001,9954904942841,9964429215313,9975306912661,9985261003961,9994316924113,10000000000001};
int tot, prime[maxs];
bool vis[maxn];
int calc(LL x)
{
	int cnt = upper_bound(sprime, sprime + maxsp, x) - sprime - 1;
	LL last = sprime[cnt], now;
	cnt *= 100;
	for(int i = 1; (now = (LL)i * i + (i + 1LL) * (i + 1)) <= x; ++i)
	{
		if(now <= last)
			continue;
		bool flag = 1;
		for(int j = 0; j < tot && prime[j] <= now / prime[j]; ++j)
			if(now % prime[j] == 0)
			{
				flag = 0;
				break;
			}
		if(flag)
			++cnt;
	}
	return cnt;
}
int main()
{
	for(int i = 2; i < maxn; ++i)
	{
		if(!vis[i])
			prime[tot++] = i;
		for(int j = 0; j < tot && (LL)i * prime[j] < maxn; ++j)
		{
			vis[i * prime[j]] = 1;
			if(i % prime[j] == 0)
				break;
		}
	}
	LL n, m, now, L, R;
	scanf("%lld%lld", &L, &R);
	printf("%d\n", calc(R) - calc(L - 1));
	return 0;
}
