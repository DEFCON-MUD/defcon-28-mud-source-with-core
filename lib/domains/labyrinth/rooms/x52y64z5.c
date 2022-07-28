inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 64, 5 }));
  set_short( "Hallway - x52y64z5" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y64z5.c",
  "east" : DIR+"/rooms/x53y64z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
