inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 48, 8 }));
  set_short( "Corridor - x10y48z8" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y48z8.c",
  "east" : DIR+"/rooms/x11y48z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
