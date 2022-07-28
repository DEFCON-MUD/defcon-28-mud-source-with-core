inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 50, 4 }));
  set_short( "Passage - x13y50z4" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y50z4.c",
  "south" : DIR+"/rooms/x13y49z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
