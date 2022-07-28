inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 23, 4 }));
  set_short( "Passage - x7y23z4" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y24z4.c",
  "south" : DIR+"/rooms/x7y22z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
