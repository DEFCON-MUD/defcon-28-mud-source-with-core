inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 56, 7 }));
  set_short( "Passage - x23y56z7" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y57z7.c",
  "south" : DIR+"/rooms/x23y55z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
