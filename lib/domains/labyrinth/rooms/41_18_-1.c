inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 41, 18, -1 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^" );

  set_objects(
    DIR+"/npc/droid.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/40_18_-1.c",
  "east" : DIR+"/rooms/42_18_-1.c"
  ]) );

}

