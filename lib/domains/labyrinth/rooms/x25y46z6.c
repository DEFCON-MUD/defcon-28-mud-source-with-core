inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 46, 6 }));
  set_short( "Passage - x25y46z6" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y46z6.c",
  "north" : DIR+"/rooms/x25y47z6.c",
  "south" : DIR+"/rooms/x25y45z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
