inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 36, 7 }));
  set_short( "Passage - x2y36z7" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y36z7.c",
  "east" : DIR+"/rooms/x3y36z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
