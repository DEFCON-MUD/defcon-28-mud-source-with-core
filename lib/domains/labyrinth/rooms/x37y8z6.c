inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 8, 6 }));
  set_short( "Corridor - x37y8z6" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y8z6.c",
  "east" : DIR+"/rooms/x38y8z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
