inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 23, 6 }));
  set_short( "Corridor - x31y23z6" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y24z6.c",
  "south" : DIR+"/rooms/x31y22z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
