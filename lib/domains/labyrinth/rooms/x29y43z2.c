inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 43, 2 }));
  set_short( "Corridor - x29y43z2" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y44z2.c",
  "south" : DIR+"/rooms/x29y42z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
