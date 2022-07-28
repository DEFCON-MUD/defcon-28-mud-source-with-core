inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 12, 1 }));
  set_short( "Passage - x51y12z1" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y13z1.c",
  "south" : DIR+"/rooms/x51y11z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
