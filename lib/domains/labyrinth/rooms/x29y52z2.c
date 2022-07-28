inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 52, 2 }));
  set_short( "Passage - x29y52z2" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y52z2.c",
  "south" : DIR+"/rooms/x29y51z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
