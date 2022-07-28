inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 64, 5 }));
  set_short( "Hallway - x50y64z5" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y64z5.c",
  "east" : DIR+"/rooms/x51y64z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
