inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 41, 6 }));
  set_short( "Passage - x21y41z6" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y42z6.c",
  "south" : DIR+"/rooms/x21y40z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
