inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 37, 51, -1 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^" );

  set_objects(
    DIR+"/npc/banker.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/37_52_-1.c",
  "north" : DIR+"/rooms/37_50_-1.c"
  ]) );

}

