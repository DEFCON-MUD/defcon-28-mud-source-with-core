inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 49, 8 }));
  set_short( "Hallway - x21y49z8" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y50z8.c",
  "south" : DIR+"/rooms/x21y48z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
