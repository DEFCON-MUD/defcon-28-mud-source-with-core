inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 2, 5 }));
  set_short( "Corridor - x24y2z5" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y2z5.c",
  "east" : DIR+"/rooms/x25y2z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
