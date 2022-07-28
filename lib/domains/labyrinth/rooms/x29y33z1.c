inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 33, 1 }));
  set_short( "Corridor - x29y33z1" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y34z1.c",
  "south" : DIR+"/rooms/x29y32z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
