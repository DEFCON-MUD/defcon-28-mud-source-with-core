inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 64, 3 }));
  set_short( "Passage - x36y64z3" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y64z3.c",
  "east" : DIR+"/rooms/x37y64z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
