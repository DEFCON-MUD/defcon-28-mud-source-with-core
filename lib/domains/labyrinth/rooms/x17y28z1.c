inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 1 }));
  set_short( "Passage - x17y28z1" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y28z1.c",
  "east" : DIR+"/rooms/x18y28z1.c",
  "north" : DIR+"/rooms/x17y29z1.c",
  "south" : DIR+"/rooms/x17y27z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
