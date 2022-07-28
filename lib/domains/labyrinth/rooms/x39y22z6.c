inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 22, 6 }));
  set_short( "Hallway - x39y22z6" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y22z6.c",
  "north" : DIR+"/rooms/x39y23z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
