inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 6, 8 }));
  set_short( "Passage - x61y6z8" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y7z8.c",
  "south" : DIR+"/rooms/x61y5z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
