inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 42, 4 }));
  set_short( "Passage - x23y42z4" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y42z4.c",
  "north" : DIR+"/rooms/x23y43z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
