inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 55, 1 }));
  set_short( "Passage - x29y55z1" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y56z1.c",
  "south" : DIR+"/rooms/x29y54z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
