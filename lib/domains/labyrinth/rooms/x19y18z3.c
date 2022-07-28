inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 18, 3 }));
  set_short( "Hallway - x19y18z3" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y18z3.c",
  "east" : DIR+"/rooms/x20y18z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
