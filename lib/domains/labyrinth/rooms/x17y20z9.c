inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 20, 9 }));
  set_short( "Hallway - x17y20z9" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y20z9.c",
  "south" : DIR+"/rooms/x17y19z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
