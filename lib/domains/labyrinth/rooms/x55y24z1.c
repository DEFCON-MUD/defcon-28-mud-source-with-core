inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 24, 1 }));
  set_short( "Hallway - x55y24z1" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y24z1.c",
  "south" : DIR+"/rooms/x55y23z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
