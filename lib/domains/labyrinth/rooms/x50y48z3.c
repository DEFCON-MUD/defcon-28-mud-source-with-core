inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 48, 3 }));
  set_short( "Hallway - x50y48z3" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y48z3.c",
  "east" : DIR+"/rooms/x51y48z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
