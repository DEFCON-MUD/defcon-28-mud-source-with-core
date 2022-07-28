inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 55, 4 }));
  set_short( "Hallway - x3y55z4" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y56z4.c",
  "south" : DIR+"/rooms/x3y54z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
