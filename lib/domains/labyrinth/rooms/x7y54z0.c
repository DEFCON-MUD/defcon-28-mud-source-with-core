inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 54, 0 }));
  set_short( "Corridor - x7y54z0" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y55z0.c",
  "south" : DIR+"/rooms/x7y53z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
