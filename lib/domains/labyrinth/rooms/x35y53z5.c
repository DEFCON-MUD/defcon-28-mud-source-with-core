inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 53, 5 }));
  set_short( "Passage - x35y53z5" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y54z5.c",
  "south" : DIR+"/rooms/x35y52z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
