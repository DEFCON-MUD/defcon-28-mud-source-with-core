inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 4, 5 }));
  set_short( "Passage - x41y4z5" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y5z5.c",
  "south" : DIR+"/rooms/x41y3z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
