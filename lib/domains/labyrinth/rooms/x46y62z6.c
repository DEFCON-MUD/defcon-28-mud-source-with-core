inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 62, 6 }));
  set_short( "Hallway - x46y62z6" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y62z6.c",
  "east" : DIR+"/rooms/x47y62z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
