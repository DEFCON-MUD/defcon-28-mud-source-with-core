inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 44, 3 }));
  set_short( "Passage - x57y44z3" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y44z3.c",
  "south" : DIR+"/rooms/x57y43z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
