inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 55, 9 }));
  set_short( "Hallway - x9y55z9" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y56z9.c",
  "south" : DIR+"/rooms/x9y54z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
