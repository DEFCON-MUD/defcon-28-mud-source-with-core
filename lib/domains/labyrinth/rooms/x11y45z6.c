inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 45, 6 }));
  set_short( "Hallway - x11y45z6" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y46z6.c",
  "south" : DIR+"/rooms/x11y44z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
