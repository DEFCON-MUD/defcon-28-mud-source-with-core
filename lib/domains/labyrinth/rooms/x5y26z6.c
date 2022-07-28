inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 26, 6 }));
  set_short( "Hallway - x5y26z6" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y26z6.c",
  "north" : DIR+"/rooms/x5y27z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
