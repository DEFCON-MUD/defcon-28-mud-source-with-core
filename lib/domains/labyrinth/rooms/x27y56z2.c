inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 56, 2 }));
  set_short( "Passage - x27y56z2" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y56z2.c",
  "east" : DIR+"/rooms/x28y56z2.c",
  "south" : DIR+"/rooms/x27y55z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
