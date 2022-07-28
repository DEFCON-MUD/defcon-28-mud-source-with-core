inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 7, 3 }));
  set_short( "Corridor - x57y7z3" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y8z3.c",
  "south" : DIR+"/rooms/x57y6z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
