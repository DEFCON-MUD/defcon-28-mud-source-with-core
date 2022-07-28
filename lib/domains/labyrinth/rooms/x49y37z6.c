inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 37, 6 }));
  set_short( "Corridor - x49y37z6" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y38z6.c",
  "south" : DIR+"/rooms/x49y36z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
