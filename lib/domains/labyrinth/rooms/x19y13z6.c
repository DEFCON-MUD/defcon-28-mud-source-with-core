inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 13, 6 }));
  set_short( "Passage - x19y13z6" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y14z6.c",
  "south" : DIR+"/rooms/x19y12z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
