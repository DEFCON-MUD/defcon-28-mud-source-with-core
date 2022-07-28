inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 33, 5 }));
  set_short( "Passage - x49y33z5" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y34z5.c",
  "south" : DIR+"/rooms/x49y32z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
