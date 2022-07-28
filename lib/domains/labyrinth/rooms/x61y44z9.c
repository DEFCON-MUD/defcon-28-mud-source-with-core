inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 44, 9 }));
  set_short( "Hallway - x61y44z9" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y44z9.c",
  "north" : DIR+"/rooms/x61y45z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
