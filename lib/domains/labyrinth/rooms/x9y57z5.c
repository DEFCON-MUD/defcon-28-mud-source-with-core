inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 57, 5 }));
  set_short( "Corridor - x9y57z5" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y58z5.c",
  "south" : DIR+"/rooms/x9y56z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
