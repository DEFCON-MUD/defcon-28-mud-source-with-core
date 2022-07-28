inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 26, 8 }));
  set_short( "Passage - x21y26z8" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y27z8.c",
  "south" : DIR+"/rooms/x21y25z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
