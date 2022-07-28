inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 34, 7 }));
  set_short( "Passage - x47y34z7" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y35z7.c",
  "south" : DIR+"/rooms/x47y33z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
