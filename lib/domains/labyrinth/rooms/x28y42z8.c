inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 42, 8 }));
  set_short( "Hallway - x28y42z8" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y42z8.c",
  "east" : DIR+"/rooms/x29y42z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
