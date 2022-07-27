inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 49, 8 }));
  set_short( "Hallway - x49y49z8" );
set_objects( DIR+"/monsters/ccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y50z8.c",
  "south" : DIR+"/rooms/x49y48z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
