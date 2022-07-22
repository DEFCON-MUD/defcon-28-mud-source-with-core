inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 13, 15, -4 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Hallway" );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^" );

  set_objects(
    DIR+"/npc/glorzo.c"
  );
 set_exits( ([
  "south" : DIR+"/rooms/13_16_-4.c",
  "north" : DIR+"/rooms/13_14_-4.c"
  ]) );

}

