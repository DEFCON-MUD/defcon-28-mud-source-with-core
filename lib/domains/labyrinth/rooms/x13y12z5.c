inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 12, 5 }));
  set_short( "Hallway - x13y12z5" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y12z5.c",
  "south" : DIR+"/rooms/x13y11z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
