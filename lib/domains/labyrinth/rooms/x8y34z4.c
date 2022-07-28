inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 34, 4 }));
  set_short( "Passage - x8y34z4" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y34z4.c",
  "east" : DIR+"/rooms/x9y34z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
